//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSModel.h"

@class NSDate, NSString;

@interface AWSS3ReplicatePartResult : AWSModel
{
    NSString *_ETag;
    NSDate *_lastModified;
}

+ (id)lastModifiedJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
@property(retain, nonatomic) NSString *ETag; // @synthesize ETag=_ETag;
- (void).cxx_destruct;

@end

