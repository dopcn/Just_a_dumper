//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SystemPushHandler : NSObject
{
    SystemPushHandler *_nextHandler;
}

@property(retain, nonatomic) SystemPushHandler *nextHandler; // @synthesize nextHandler=_nextHandler;
- (void).cxx_destruct;
- (void)handlePush:(id)arg1;
- (_Bool)canHandle:(id)arg1;
- (void)registerNextHandler:(id)arg1;

@end

