//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol ONEAPNEventHandling;

@interface ONEAPNEventHandlerItem : NSObject
{
    NSString *_name;
    id <ONEAPNEventHandling> _handler;
}

+ (id)handlerNameFromHandler:(id)arg1;
@property(readonly, nonatomic) __weak id <ONEAPNEventHandling> handler; // @synthesize handler=_handler;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithAPNEventHandler:(id)arg1;

@end

