//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDSBaseData.h"

@class NSString;

@interface WDSTalentProfessListItem : WDSBaseData
{
    NSString *_certName;
    NSString *_sampleImg;
}

@property(copy, nonatomic) NSString *sampleImg; // @synthesize sampleImg=_sampleImg;
@property(copy, nonatomic) NSString *certName; // @synthesize certName=_certName;
- (void).cxx_destruct;
- (id)parseInfoFromDictionaryManually:(id)arg1;

@end

