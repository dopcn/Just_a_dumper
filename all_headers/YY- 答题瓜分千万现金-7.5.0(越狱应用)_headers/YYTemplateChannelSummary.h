//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, YYTemplateChannelConfig;

@interface YYTemplateChannelSummary : NSObject
{
    Class _summaryClass;
    YYTemplateChannelConfig *_config;
    CDUnknownBlockType _loadBlock;
    CDUnknownBlockType _blockBeforeGotoChannel;
    NSDictionary *_userInfo;
}

@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) CDUnknownBlockType blockBeforeGotoChannel; // @synthesize blockBeforeGotoChannel=_blockBeforeGotoChannel;
@property(copy, nonatomic) CDUnknownBlockType loadBlock; // @synthesize loadBlock=_loadBlock;
@property(retain, nonatomic) YYTemplateChannelConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) Class summaryClass; // @synthesize summaryClass=_summaryClass;
- (void).cxx_destruct;
- (_Bool)isValid;

@end

