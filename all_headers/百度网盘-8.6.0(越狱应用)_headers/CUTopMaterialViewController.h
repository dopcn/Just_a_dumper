//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CUBaseViewController.h"

@class CUCallService, CUURLImageView, NSLayoutConstraint, NSMutableArray, UILabel, UIView;
@protocol CUTSelectMaterialDelegate;

@interface CUTopMaterialViewController : CUBaseViewController
{
    CUCallService *sendService;
    NSMutableArray *baseDataArray;
    UIView *brandView;
    UIView *materialView;
    NSMutableArray *brandBtnArray;
    NSMutableArray *materialBtnArray;
    int currentSelectBrand;
    int currentSelectMaterial;
    CUURLImageView *pictureImv;
    UILabel *sizeNameLabel;
    UILabel *sizeLabel;
    UILabel *priceLabel;
    UILabel *openPriceLabel;
    UILabel *materialExplainLabel;
    UIView *subView;
    id <CUTSelectMaterialDelegate> delegate;
    NSLayoutConstraint *_constraintTopViewHeight;
}

@property(nonatomic) __weak NSLayoutConstraint *constraintTopViewHeight; // @synthesize constraintTopViewHeight=_constraintTopViewHeight;
@property(nonatomic) id <CUTSelectMaterialDelegate> delegate; // @synthesize delegate;
@property(nonatomic) UIView *subView; // @synthesize subView;
- (void).cxx_destruct;
- (void)animationFinish:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (id)getPrice:(id)arg1:(id)arg2;
- (void)doneBtnClick:(id)arg1;
- (void)closeBtnClick:(id)arg1;
- (void)initNavigationItem;
- (void)initNavigationItemForBaiDu;
- (void)materialBtnClicked:(id)arg1;
- (void)brandBtnClicked:(id)arg1;
- (void)initBrandView;
- (void)callFinish:(id)arg1 withData:(id)arg2;
- (void)stopRequset;
- (void)requsetWithSizeName:(id)arg1:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)loadView;
- (void)viewDidLoad;

@end

