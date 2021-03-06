//
//  DataConfigLoader.h
//  WBookLibrary
//
//  Created by Denis Andreev on 25/02/2017.
//  Copyright © 2017 Denis Andreev. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol DataConfigLoaderDelegate <NSObject>

-(void)changeData;

@end

@interface DataConfigLoader : NSObject

@property (nonatomic, assign) id<DataConfigLoaderDelegate> delegate;
@property (nonatomic) NSUserDefaults *userDefaults;

+(DataConfigLoader*) singleInstance;

-(NSString*)getBookPath;
-(void)setBookPath:(NSString*)path;
-(void)setWindowSize:(CGSize)windowSize;
-(CGSize)getFrameWindowSize;
-(NSArray*)bookGroups;

-(NSArray*)loadBookGroupList;
-(BOOL)addBookToGroup:(NSString*)group bookName:(NSString*)bookName;
-(BOOL)addPagePositinByName:(NSString*)bookName page:(int)page;
-(int)getPagePositin:(NSString*)bookName;

-(BOOL)addMarkByBookName:(NSString*)name page:(int)page text:(NSString*)text colorRed:(float)red colorGreen:(float)green colorBlue:(float)blue;
-(NSArray*)marksArrayByBookName:(NSString*)name;

@end
