//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMGeneralPageTableComponent.h"

@class NSString;

@interface FMAccountReceiveListComponet : FMGeneralPageTableComponent
{
    NSString *_userId;
    NSString *_bizType;
}

@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (void)requestSuccessHandle:(id)arg1;
- (id)getParameters;
- (id)init;
- (_Bool)isNeedLogin;
- (double)cacheTime;
- (Class)returnClass;
- (id)mtopApiVersion;
- (id)mtopApi;

@end

