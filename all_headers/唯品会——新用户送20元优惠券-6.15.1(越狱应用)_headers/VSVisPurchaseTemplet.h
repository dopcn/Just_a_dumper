//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VSVisFinanceTemplet, VSVisHotSalesTemplet, VSVisImageTemplet, VSVisStagesPaymentTemplet;

@interface VSVisPurchaseTemplet : NSObject
{
    int _type;
    VSVisImageTemplet *_imageTemplet;
    VSVisFinanceTemplet *_financeTemplet;
    VSVisStagesPaymentTemplet *_stagesPaymentTemplet;
    VSVisHotSalesTemplet *_hotSalesTemplet;
    double _width;
    double _height;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) VSVisHotSalesTemplet *hotSalesTemplet; // @synthesize hotSalesTemplet=_hotSalesTemplet;
@property(retain, nonatomic) VSVisStagesPaymentTemplet *stagesPaymentTemplet; // @synthesize stagesPaymentTemplet=_stagesPaymentTemplet;
@property(retain, nonatomic) VSVisFinanceTemplet *financeTemplet; // @synthesize financeTemplet=_financeTemplet;
@property(retain, nonatomic) VSVisImageTemplet *imageTemplet; // @synthesize imageTemplet=_imageTemplet;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

