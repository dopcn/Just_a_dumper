//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMAOSBaseHttpRequest.h"

@class NSData, NSString;
@protocol RequestGet, RequestIgnore;

@interface LTMArriveCoachStationRequest : LTMAOSBaseHttpRequest
{
    NSString<RequestGet> *_adcode;
    NSData<RequestIgnore> *_content;
}

+ (id)bizLogicName;
@property(retain, nonatomic) NSData<RequestIgnore> *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString<RequestGet> *adcode; // @synthesize adcode=_adcode;
- (void).cxx_destruct;
- (id)originalPostData;
- (void)setParams:(id)arg1;
- (id)init;

@end

