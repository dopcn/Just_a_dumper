//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCBaseMessageDataConfig.h"

@class NSDictionary;

@interface TBCMessageContainerDataConfig : TBCBaseMessageDataConfig
{
    long long _pageSource;
    long long _messageType;
    NSDictionary *_extraMessageInfo;
}

@property(copy, nonatomic) NSDictionary *extraMessageInfo; // @synthesize extraMessageInfo=_extraMessageInfo;
@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(nonatomic) long long pageSource; // @synthesize pageSource=_pageSource;
- (void).cxx_destruct;
- (id)initWithPageSource:(long long)arg1 messageType:(long long)arg2;
- (id)init;

@end

