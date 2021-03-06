//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "VSScrollOperationViewProtocol-Protocol.h"

@class NSString, UIImageView, VSScrollOperationViewModel;

@interface VSScrollOperationClassificationView : UIView <VSScrollOperationViewProtocol>
{
    VSScrollOperationViewModel *_viewModel;
    double _totalHeight;
    double _refrenceWidth;
    UIImageView *_titleImageView;
}

@property(nonatomic) __weak UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(nonatomic) double refrenceWidth; // @synthesize refrenceWidth=_refrenceWidth;
@property(nonatomic) double totalHeight; // @synthesize totalHeight=_totalHeight;
@property(retain, nonatomic) VSScrollOperationViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)fetchDictionaryWithScrollOperationExposeData;
- (id)fetchArrayWithScrollOperationExposeData;
- (id)fetchScrollOperationExposeDataWithAllData;
- (id)vs_viewModel;
- (double)vs_viewHeight;
- (void)setupView;
- (id)initWithViewModel:(id)arg1 withWidth:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

