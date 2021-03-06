//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FCopyObject.h"

@class FOTAXProductPriceInfo, FOTAXProductUseGuide, FOrderDetailXProductPriceInfo, NSArray, NSNumber, NSString;

@interface FTTSInsurancePromptItem : FCopyObject
{
    NSString *_productName;
    NSString *_shortText;
    NSString *_detailText;
    NSNumber *_insType;
    NSString *_profitTip;
    NSArray *_goPrompt__Array__FTTSInsurancePromptTipItem;
    NSArray *_backPrompt__Array__FTTSInsurancePromptTipItem;
    NSArray *_passengers__Array__FTTSInsurancePromptPassenger;
    NSArray *_imageUrls__Array__NSString;
    NSArray *_shortHints__Array__NSString;
    NSArray *_shortHint__Array__FOrderDetailXproductGuideInfo;
    FOrderDetailXProductPriceInfo *_xProductPriceInfo;
    FOTAXProductPriceInfo *_priceInfo;
    NSArray *_payWay__Array__FOTAXProductPayWayInfo;
    FOTAXProductUseGuide *_useProcess;
    NSString *_segmentDesc;
    NSNumber *_segmentBgColor;
    NSNumber *_segmentTextColor;
}

@property(retain, nonatomic, getter=segmentTextColor) NSNumber *segmentTextColor; // @synthesize segmentTextColor=_segmentTextColor;
@property(retain, nonatomic, getter=segmentBgColor) NSNumber *segmentBgColor; // @synthesize segmentBgColor=_segmentBgColor;
@property(retain, nonatomic, getter=segmentDesc) NSString *segmentDesc; // @synthesize segmentDesc=_segmentDesc;
@property(readonly, nonatomic, getter=useProcess) FOTAXProductUseGuide *useProcess; // @synthesize useProcess=_useProcess;
@property(readonly, nonatomic, getter=arrayPayWay) NSArray *payWay__Array__FOTAXProductPayWayInfo; // @synthesize payWay__Array__FOTAXProductPayWayInfo=_payWay__Array__FOTAXProductPayWayInfo;
@property(readonly, nonatomic, getter=priceInfo) FOTAXProductPriceInfo *priceInfo; // @synthesize priceInfo=_priceInfo;
@property(readonly, nonatomic, getter=xProductPriceInfo) FOrderDetailXProductPriceInfo *xProductPriceInfo; // @synthesize xProductPriceInfo=_xProductPriceInfo;
@property(readonly, nonatomic, getter=arrayShortHint) NSArray *shortHint__Array__FOrderDetailXproductGuideInfo; // @synthesize shortHint__Array__FOrderDetailXproductGuideInfo=_shortHint__Array__FOrderDetailXproductGuideInfo;
@property(retain, nonatomic, getter=arrayContactInfo) NSArray *shortHints__Array__NSString; // @synthesize shortHints__Array__NSString=_shortHints__Array__NSString;
@property(retain, nonatomic, getter=imageUrls) NSArray *imageUrls__Array__NSString; // @synthesize imageUrls__Array__NSString=_imageUrls__Array__NSString;
@property(retain, nonatomic, getter=arrayPassengers) NSArray *passengers__Array__FTTSInsurancePromptPassenger; // @synthesize passengers__Array__FTTSInsurancePromptPassenger=_passengers__Array__FTTSInsurancePromptPassenger;
@property(retain, nonatomic, getter=arrayFTTSInsurancePromptTipItemBack) NSArray *backPrompt__Array__FTTSInsurancePromptTipItem; // @synthesize backPrompt__Array__FTTSInsurancePromptTipItem=_backPrompt__Array__FTTSInsurancePromptTipItem;
@property(retain, nonatomic, getter=arrayFTTSInsurancePromptTipItemGo) NSArray *goPrompt__Array__FTTSInsurancePromptTipItem; // @synthesize goPrompt__Array__FTTSInsurancePromptTipItem=_goPrompt__Array__FTTSInsurancePromptTipItem;
@property(retain, nonatomic, getter=profitTip) NSString *profitTip; // @synthesize profitTip=_profitTip;
@property(retain, nonatomic, getter=insType) NSNumber *insType; // @synthesize insType=_insType;
@property(retain, nonatomic, getter=detailText) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic, getter=shortText) NSString *shortText; // @synthesize shortText=_shortText;
@property(retain, nonatomic, getter=productName) NSString *productName; // @synthesize productName=_productName;
- (void).cxx_destruct;
- (id)converPromptToFloaterModel;

@end

