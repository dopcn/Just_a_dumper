//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class KGThemeImageView, KGThemeLabel, KGThemeLine, KTVHomePKOpusList, NSMutableArray, UIButton, UIImageView;
@protocol KTVHomePKHeaderDelegate;

@interface KTVHomePKHeader : UICollectionReusableView
{
    KTVHomePKOpusList *_pkList;
    id <KTVHomePKHeaderDelegate> _delegate;
    KGThemeLine *_boldLine;
    UIImageView *_hotImg;
    KGThemeLabel *_titleLab;
    NSMutableArray *_userImgArr;
    KGThemeImageView *_arrowImg;
    UIButton *_touchBtn;
}

@property(retain, nonatomic) UIButton *touchBtn; // @synthesize touchBtn=_touchBtn;
@property(retain, nonatomic) KGThemeImageView *arrowImg; // @synthesize arrowImg=_arrowImg;
@property(retain, nonatomic) NSMutableArray *userImgArr; // @synthesize userImgArr=_userImgArr;
@property(retain, nonatomic) KGThemeLabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIImageView *hotImg; // @synthesize hotImg=_hotImg;
@property(retain, nonatomic) KGThemeLine *boldLine; // @synthesize boldLine=_boldLine;
@property(nonatomic) __weak id <KTVHomePKHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KTVHomePKOpusList *pkList; // @synthesize pkList=_pkList;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)actionHeader:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

