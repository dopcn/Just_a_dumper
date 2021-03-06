//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol TencentSessionDelegate;

@interface NMTencentOAuth : NSObject
{
    NSString *_accessToken;
    NSDate *_expirationDate;
    NSString *_openId;
    NSString *_redirectURI;
    id <TencentSessionDelegate> _sessionDelegate;
}

@property(nonatomic) __weak id <TencentSessionDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
@property(retain, nonatomic) NSString *redirectURI; // @synthesize redirectURI=_redirectURI;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;

@end

