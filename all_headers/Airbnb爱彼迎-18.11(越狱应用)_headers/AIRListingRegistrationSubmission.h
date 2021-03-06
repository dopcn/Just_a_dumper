//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSArray, NSDictionary, NSString;

@interface AIRListingRegistrationSubmission : AIRModel
{
    NSString *_submissionId;
    NSString *_registrationId;
    NSString *_regulatoryBody;
    NSArray *_additionalData;
    NSDictionary *_answers;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
@property(copy) NSDictionary *answers; // @synthesize answers=_answers;
@property(readonly, copy, nonatomic) NSArray *additionalData; // @synthesize additionalData=_additionalData;
@property(readonly, copy, nonatomic) NSString *regulatoryBody; // @synthesize regulatoryBody=_regulatoryBody;
@property(readonly, copy, nonatomic) NSString *registrationId; // @synthesize registrationId=_registrationId;
@property(readonly, copy, nonatomic) NSString *submissionId; // @synthesize submissionId=_submissionId;
- (void).cxx_destruct;

@end

