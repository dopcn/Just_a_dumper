//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IFIndexBaseCell.h"

#import "IfengData_RequestListener-Protocol.h"

@class IFImageView, IfengUILabel, NSString, UIImageView;

@interface IFIndexSportLiveCell : IFIndexBaseCell <IfengData_RequestListener>
{
    IFImageView *_leftImg;
    IFImageView *_rightImg;
    IfengUILabel *_lname;
    IfengUILabel *_rname;
    IfengUILabel *_lscore;
    IfengUILabel *_rscore;
    UIImageView *_middle;
    IfengUILabel *_desc;
}

@property(retain, nonatomic) IfengUILabel *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) UIImageView *middle; // @synthesize middle=_middle;
@property(retain, nonatomic) IfengUILabel *rscore; // @synthesize rscore=_rscore;
@property(retain, nonatomic) IfengUILabel *lscore; // @synthesize lscore=_lscore;
@property(retain, nonatomic) IfengUILabel *rname; // @synthesize rname=_rname;
@property(retain, nonatomic) IfengUILabel *lname; // @synthesize lname=_lname;
@property(retain, nonatomic) IFImageView *rightImg; // @synthesize rightImg=_rightImg;
@property(retain, nonatomic) IFImageView *leftImg; // @synthesize leftImg=_leftImg;
- (void).cxx_destruct;
- (void)getRealtimeScore:(id)arg1;
- (void)loadData:(id)arg1;
- (void)uiInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

