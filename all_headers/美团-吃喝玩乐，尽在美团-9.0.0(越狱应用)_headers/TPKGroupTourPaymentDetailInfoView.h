//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, TPKGroupTourOrderPaymentResult, UIImageView;

@interface TPKGroupTourPaymentDetailInfoView : UIView
{
    TPKGroupTourOrderPaymentResult *_result;
    NSArray *_detailInfoArray;
    UIImageView *_separateLine;
}

@property(retain, nonatomic) UIImageView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) NSArray *detailInfoArray; // @synthesize detailInfoArray=_detailInfoArray;
@property(retain, nonatomic) TPKGroupTourOrderPaymentResult *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)getDetailInfo;
- (void)setupUI;
- (id)initWithOrderSignal:(id)arg1;

@end

