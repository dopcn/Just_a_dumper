//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KTVThemeImageView.h"

@class UILabel;

@interface KTVMusicHomeRedPoint : KTVThemeImageView
{
    _Bool _bIsZeroHidden;
    unsigned long long _redPointNum;
    UILabel *_redPointNumLabel;
    double _singleNumFont;
    struct CGSize _smallSize;
    struct CGSize _singleSize;
    struct CGSize _doubleSize;
    struct CGSize _threeSize;
}

@property(nonatomic) _Bool bIsZeroHidden; // @synthesize bIsZeroHidden=_bIsZeroHidden;
@property(nonatomic) double singleNumFont; // @synthesize singleNumFont=_singleNumFont;
@property(nonatomic) struct CGSize threeSize; // @synthesize threeSize=_threeSize;
@property(nonatomic) struct CGSize doubleSize; // @synthesize doubleSize=_doubleSize;
@property(nonatomic) struct CGSize singleSize; // @synthesize singleSize=_singleSize;
@property(nonatomic) struct CGSize smallSize; // @synthesize smallSize=_smallSize;
@property(retain, nonatomic) UILabel *redPointNumLabel; // @synthesize redPointNumLabel=_redPointNumLabel;
@property(nonatomic) unsigned long long redPointNum; // @synthesize redPointNum=_redPointNum;
- (void).cxx_destruct;
- (void)createView;
- (id)init;

@end

