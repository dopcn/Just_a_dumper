//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BSResponse.h"

@class NSString, TMLabelDetail;

@interface TMFetchLabelResponse : BSResponse
{
    TMLabelDetail *_labelDetail;
    NSString *_benefitImageUrl;
}

@property(copy, nonatomic) NSString *benefitImageUrl; // @synthesize benefitImageUrl=_benefitImageUrl;
@property(retain, nonatomic) TMLabelDetail *labelDetail; // @synthesize labelDetail=_labelDetail;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

