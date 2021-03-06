//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol L4Appender;

@protocol L4AppenderAttachable <NSObject>
- (void)removeAppenderWithName:(NSString *)arg1;
- (void)removeAppender:(id <L4Appender>)arg1;
- (void)removeAllAppenders;
- (_Bool)isAttached:(id <L4Appender>)arg1;
- (id <L4Appender>)appenderWithName:(NSString *)arg1;
- (NSArray *)allAppenders;
- (void)addAppender:(id <L4Appender>)arg1;
@end

