//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDModel.h"

@class NSNumber, NSString;

@interface JDPromotionModel : JDModel
{
    NSNumber *_ID;
    NSString *_title;
    NSNumber *_type;
    NSNumber *_checkType;
}

@property(retain, nonatomic) NSNumber *checkType; // @synthesize checkType=_checkType;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *ID; // @synthesize ID=_ID;
- (void)dealloc;
- (id)copy;
- (void)setDataWithDic:(id)arg1;

@end

