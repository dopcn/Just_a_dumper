//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSDictionary, NSString;

@interface VSCollectedHotBrandModel : JSONModel
{
    _Bool _isFav;
    NSString *_SN;
    NSString *_chineseName;
    NSString *_englishName;
    NSString *_logoUrl;
    NSDictionary *_brandLogos;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (_Bool)propertyIsIgnored:(id)arg1;
+ (id)keyMapper;
@property(nonatomic) _Bool isFav; // @synthesize isFav=_isFav;
@property(copy, nonatomic) NSDictionary *brandLogos; // @synthesize brandLogos=_brandLogos;
@property(copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(copy, nonatomic) NSString *englishName; // @synthesize englishName=_englishName;
@property(copy, nonatomic) NSString *chineseName; // @synthesize chineseName=_chineseName;
@property(copy, nonatomic) NSString *SN; // @synthesize SN=_SN;
- (void).cxx_destruct;

@end

