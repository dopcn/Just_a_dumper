//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXViewModel.h"

@class UIButton, UILabel, UIView, YXRedPacketLuckyHeaderViewModel;

@interface YXRedPacketCompanyHeaderViewModel : YXViewModel
{
    _Bool _shareBtnClick;
    _Bool _tipClicked;
    struct YXRedPacketLuckyHeaderViewModel *_topViewModel;
    UIView *_topView;
    UIView *_bottomView;
    UILabel *_textLabel;
    UILabel *_moneyLabel;
    UILabel *_tipLabel;
    UIButton *_btn;
    UIView *_line;
}

@property(nonatomic) __weak UIView *line; // @synthesize line=_line;
@property(nonatomic) __weak UIButton *btn; // @synthesize btn=_btn;
@property(nonatomic) __weak UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) __weak UILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) __weak UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) YXRedPacketLuckyHeaderViewModel *topViewModel; // @synthesize topViewModel=_topViewModel;
@property(nonatomic) _Bool tipClicked; // @synthesize tipClicked=_tipClicked;
@property(nonatomic) _Bool shareBtnClick; // @synthesize shareBtnClick=_shareBtnClick;
- (void).cxx_destruct;
- (void)onShareBtnClick:(id)arg1;
- (void)startNumberFlickWithAnimation:(_Bool)arg1 delta:(double)arg2 max:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;

@end

