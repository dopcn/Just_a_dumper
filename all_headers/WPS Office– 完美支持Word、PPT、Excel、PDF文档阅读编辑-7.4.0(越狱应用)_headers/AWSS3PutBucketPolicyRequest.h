//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSRequest.h"

@class NSString;

@interface AWSS3PutBucketPolicyRequest : AWSRequest
{
    NSString *_bucket;
    NSString *_contentMD5;
    NSString *_policy;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *policy; // @synthesize policy=_policy;
@property(retain, nonatomic) NSString *contentMD5; // @synthesize contentMD5=_contentMD5;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;

@end

