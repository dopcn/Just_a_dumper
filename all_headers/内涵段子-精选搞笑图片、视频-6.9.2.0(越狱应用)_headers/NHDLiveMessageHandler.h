//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSPredicate;

@interface NHDLiveMessageHandler : NSObject
{
    _Bool _exclutive;
    NSPredicate *_predicate;
    CDUnknownBlockType _messageHandler;
}

@property(copy, nonatomic) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) _Bool exclutive; // @synthesize exclutive=_exclutive;
- (void).cxx_destruct;
- (_Bool)canHandleMessage:(id)arg1;
- (void)handleMessage:(id)arg1;
- (id)initWithPredicate:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

