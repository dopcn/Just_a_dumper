//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSNumber, NSString;

@interface CTVASTAdPod : NSObject
{
    NSString *_adID;
    NSNumber *_sequence;
    NSString *_adSystem;
    NSString *_version;
    NSMutableArray *_Impressions;
    NSMutableArray *_Errors;
    NSMutableArray *_VASTCreatives;
}

@property(retain, nonatomic) NSMutableArray *VASTCreatives; // @synthesize VASTCreatives=_VASTCreatives;
@property(retain, nonatomic) NSMutableArray *Errors; // @synthesize Errors=_Errors;
@property(retain, nonatomic) NSMutableArray *Impressions; // @synthesize Impressions=_Impressions;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *adSystem; // @synthesize adSystem=_adSystem;
@property(retain, nonatomic) NSNumber *sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) NSString *adID; // @synthesize adID=_adID;
- (void).cxx_destruct;

@end

