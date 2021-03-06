//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDSBaseRequest.h"

@class NSString;

@interface WDSCRMCDataByIdRequest : WDSBaseRequest
{
    NSString *_begin;
    NSString *_end;
    NSString *_type;
    NSString *_gId;
    NSString *_tabId;
}

@property(retain, nonatomic) NSString *tabId; // @synthesize tabId=_tabId;
@property(retain, nonatomic) NSString *gId; // @synthesize gId=_gId;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *end; // @synthesize end=_end;
@property(retain, nonatomic) NSString *begin; // @synthesize begin=_begin;
- (void).cxx_destruct;
- (id)parseResponseData:(id)arg1;
- (void)assembleParams;
- (void)reset;
- (id)init;

@end

