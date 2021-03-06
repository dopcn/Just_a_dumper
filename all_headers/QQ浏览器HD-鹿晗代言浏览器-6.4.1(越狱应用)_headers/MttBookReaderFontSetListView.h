//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MttBookFontViewCellDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UILabel, UIScrollView;
@protocol MttBookReaderFontSetListViewDelegate;

@interface MttBookReaderFontSetListView : UIView <MttBookFontViewCellDelegate>
{
    NSString *_registerFontName;
    id <MttBookReaderFontSetListViewDelegate> _delegate;
    UILabel *_titleLabel;
    UIButton *_btnBack;
    UIScrollView *_scrollView;
    NSMutableArray *_cells;
}

@property(retain, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIButton *btnBack; // @synthesize btnBack=_btnBack;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <MttBookReaderFontSetListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onClickBack:(id)arg1;
- (void)MttBookFontViewCellOnClickInUse:(id)arg1;
- (_Bool)MttBookFontViewCell:(id)arg1 downloadedNameAndApplyChangeTo:(id)arg2;
- (void)MttBookFontViewCell:(id)arg1 registerChangeToFontNameAfterDownloaded:(id)arg2;
- (void)dealloc;
- (void)colorChange:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

