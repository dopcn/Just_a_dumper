//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface CCBStatusCheckManager : NSObject
{
    NSDictionary *_checkerCfgDictionary;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSDictionary *checkerCfgDictionary; // @synthesize checkerCfgDictionary=_checkerCfgDictionary;
- (void).cxx_destruct;
- (void)checkCommandByTxcode:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)invokeCallback:(CDUnknownBlockType)arg1;
- (void)ccb_checkCommandByTxcode:(id)arg1 checkers:(id)arg2 index:(int)arg3 callback:(CDUnknownBlockType)arg4;

@end

