//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSDate, TPKGroupTourDetailViewModel, TPKPreSaleChatView, UILabel;

@interface TPKGroupTourPriceFooterViewController : UIViewController
{
    NSDate *_orderSelectedDate;
    UILabel *_bottomLabel;
    UILabel *_priceLabel;
    TPKPreSaleChatView *_chatView;
    TPKGroupTourDetailViewModel *_viewModel;
}

@property(retain, nonatomic) TPKGroupTourDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) TPKPreSaleChatView *chatView; // @synthesize chatView=_chatView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) NSDate *orderSelectedDate; // @synthesize orderSelectedDate=_orderSelectedDate;
- (void).cxx_destruct;
- (void)configBottomView;
- (void)didReceiveMemoryWarning;
- (void)configPriceLabelWithPrice:(id)arg1 haveFixedDate:(_Bool)arg2;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

@end

