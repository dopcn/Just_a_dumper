//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSS3Owner, NSDate, NSNumber, NSString;

@interface AWSS3ObjectVersion : AWSModel
{
    NSString *_ETag;
    NSNumber *_isLatest;
    NSString *_key;
    NSDate *_lastModified;
    AWSS3Owner *_owner;
    NSNumber *_size;
    long long _storageClass;
    NSString *_versionId;
}

+ (id)storageClassJSONTransformer;
+ (id)ownerJSONTransformer;
+ (id)lastModifiedJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *versionId; // @synthesize versionId=_versionId;
@property(nonatomic) long long storageClass; // @synthesize storageClass=_storageClass;
@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(retain, nonatomic) AWSS3Owner *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSNumber *isLatest; // @synthesize isLatest=_isLatest;
@property(retain, nonatomic) NSString *ETag; // @synthesize ETag=_ETag;
- (void).cxx_destruct;

@end

