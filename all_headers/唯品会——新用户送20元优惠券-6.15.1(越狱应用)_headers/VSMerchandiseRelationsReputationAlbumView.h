//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "VSProductDetailViewProtocol-Protocol.h"

@class NSDictionary, NSString, VSMerchandiseRelationsAlbumViewModel;
@protocol VSProductDetailViewDelegate;

@interface VSMerchandiseRelationsReputationAlbumView : UIView <VSProductDetailViewProtocol>
{
    id <VSProductDetailViewDelegate> delegate;
    NSString *_cat3Id;
    VSMerchandiseRelationsAlbumViewModel *_viewModel;
    NSDictionary *_rankIconMapping;
}

@property(retain, nonatomic) NSDictionary *rankIconMapping; // @synthesize rankIconMapping=_rankIconMapping;
@property(retain, nonatomic) VSMerchandiseRelationsAlbumViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSString *cat3Id; // @synthesize cat3Id=_cat3Id;
@property(nonatomic) __weak id <VSProductDetailViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (double)viewHeight;
- (void)updateWithMerchandiseInfo:(id)arg1;
- (void)configureReputationAlbumes;
- (void)loadData;
- (void)setupUI;
- (void)setupWithFrame:(struct CGRect)arg1 merchandiseInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

