//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;
@protocol SNPackagePopCellHeaderViewDelegate;

@interface SNPackagePopCellHeaderView : UIView
{
    _Bool _isOpen;
    UILabel *_titleLable;
    UILabel *_priceLable;
    UIImageView *_arrowImage;
    UIImageView *_topLine;
    UIImageView *_bottomLine;
    long long _sectionNum;
    id <SNPackagePopCellHeaderViewDelegate> _headerViewDelegate;
}

@property(nonatomic) __weak id <SNPackagePopCellHeaderViewDelegate> headerViewDelegate; // @synthesize headerViewDelegate=_headerViewDelegate;
@property(nonatomic) long long sectionNum; // @synthesize sectionNum=_sectionNum;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(retain, nonatomic) UIImageView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImageView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIImageView *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) UILabel *priceLable; // @synthesize priceLable=_priceLable;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 packageDTO:(id)arg2;

@end

