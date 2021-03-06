//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol PLUBlockExcuteTaskStrategy;

@interface PLUBlockExcuteTask : NSObject
{
    CDUnknownBlockType _excuteBlock;
    CDUnknownBlockType _cleanBlock;
    _Bool _started;
    id <PLUBlockExcuteTaskStrategy> _blockExcuteTaskStrategy;
    NSString *_name;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id <PLUBlockExcuteTaskStrategy> blockExcuteTaskStrategy; // @synthesize blockExcuteTaskStrategy=_blockExcuteTaskStrategy;
- (void).cxx_destruct;
- (void)stopExcuteBlock;
- (void)runExcuteBlock;
- (_Bool)tryExcuteAgainIfNeed;
- (void)stopTask;
- (void)startTask;
- (void)dealloc;
- (id)initWithName:(id)arg1 excuteBlock:(CDUnknownBlockType)arg2 cleanBlock:(CDUnknownBlockType)arg3;

@end

