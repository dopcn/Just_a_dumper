//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface DirectSearchGuessYourLike : CTBusinessBean
{
    _Bool _isDomestic;
    int _cityID;
    int _provinceID;
    int _districtID;
    NSString *_keyword;
    NSString *_displayText;
}

@property(copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(nonatomic) int districtID; // @synthesize districtID=_districtID;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) _Bool isDomestic; // @synthesize isDomestic=_isDomestic;
@property(nonatomic) int provinceID; // @synthesize provinceID=_provinceID;
@property(nonatomic) int cityID; // @synthesize cityID=_cityID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

