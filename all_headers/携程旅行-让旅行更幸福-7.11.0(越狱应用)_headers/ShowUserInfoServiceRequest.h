//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface ShowUserInfoServiceRequest : CTBusinessBean
{
    int serviceVersion;
    int platform;
    NSString *requestID;
    long long orderID;
    int category;
    int cardInfoID;
    NSString *aliPayUID;
    NSString *authCode;
}

@property(copy, nonatomic) NSString *authCode; // @synthesize authCode;
@property(copy, nonatomic) NSString *aliPayUID; // @synthesize aliPayUID;
@property(nonatomic) int cardInfoID; // @synthesize cardInfoID;
@property(nonatomic) int category; // @synthesize category;
@property(nonatomic) long long orderID; // @synthesize orderID;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID;
@property(nonatomic) int platform; // @synthesize platform;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

