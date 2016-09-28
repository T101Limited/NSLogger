//
//  NSLogger.h
//  Video Downloader
//
//  Created by Joe Barbour on 21/04/2015.
//  Copyright (c) 2015 NorthernSpark. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSLogger : NSObject {
}

-(void)log:(NSString *)title properties:(NSDictionary *)properties;

-(NSURL *)logDirectory;
-(NSString *)logPrint;
-(NSData *)logData;
-(void)deleteLog;

@property (nonatomic) BOOL degbugger;

@end
