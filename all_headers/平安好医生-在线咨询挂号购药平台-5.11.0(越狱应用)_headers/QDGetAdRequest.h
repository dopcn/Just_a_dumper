//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QDRequest.h"

@class CLLocation, NSDictionary, NSString;

@interface QDGetAdRequest : QDRequest
{
    _Bool _debugMode;
    NSString *_token;
    NSString *_appId;
    NSString *_mobile;
    NSString *_partyNo;
    NSString *_userId;
    NSDictionary *_userTags;
    CLLocation *_location;
}

@property _Bool debugMode; // @synthesize debugMode=_debugMode;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSDictionary *userTags; // @synthesize userTags=_userTags;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *partyNo; // @synthesize partyNo=_partyNo;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)encodeParams;
- (id)urlString;

@end

