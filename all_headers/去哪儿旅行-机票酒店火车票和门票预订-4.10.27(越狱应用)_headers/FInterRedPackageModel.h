//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FTTSInterAVDiscount, NSMutableArray;

@interface FInterRedPackageModel : NSObject
{
    FTTSInterAVDiscount *_discountcfg;
    NSMutableArray *_arrayRedPackageCellModel;
    NSMutableArray *_arrayRedPackageOriginModel;
}

@property(retain, nonatomic) NSMutableArray *arrayRedPackageOriginModel; // @synthesize arrayRedPackageOriginModel=_arrayRedPackageOriginModel;
@property(retain, nonatomic) NSMutableArray *arrayRedPackageCellModel; // @synthesize arrayRedPackageCellModel=_arrayRedPackageCellModel;
@property(retain, nonatomic) FTTSInterAVDiscount *discountcfg; // @synthesize discountcfg=_discountcfg;
- (void).cxx_destruct;
- (void)changeModelStates:(id)arg1;
- (id)setAVRedPakegeCellView:(id)arg1;
- (void)refreshModel:(id)arg1;

@end

