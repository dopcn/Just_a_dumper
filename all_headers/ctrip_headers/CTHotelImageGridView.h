//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class CTHotelDetailCacheBean, CTHotelNoPicView, HotelBasicImageModel, HotelImageViewModel, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIView;
@protocol CTHotelImageGridViewDelegate;

@interface CTHotelImageGridView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _bScrollDragged;
    int _hotelId;
    int _hotelDataType;
    HotelImageViewModel *_imageModel;
    CTHotelNoPicView *_nopicView;
    NSArray *_imageTabArray;
    long long _gridType;
    UIView *_picturesTabView;
    HotelBasicImageModel *_selectImageModel;
    NSArray *_hotelGroupStyleList;
    id <CTHotelImageGridViewDelegate> _btndelegate;
    NSMutableDictionary *_offsetDict;
    CTHotelDetailCacheBean *_mCacheBean;
    double _pictureTabViewHeight;
    NSMutableArray *_hotelImageTitleList;
    double _offset;
}

+ (id)createView:(struct CGRect)arg1;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSMutableArray *hotelImageTitleList; // @synthesize hotelImageTitleList=_hotelImageTitleList;
@property(nonatomic) _Bool bScrollDragged; // @synthesize bScrollDragged=_bScrollDragged;
@property(nonatomic) double pictureTabViewHeight; // @synthesize pictureTabViewHeight=_pictureTabViewHeight;
@property(nonatomic) __weak CTHotelDetailCacheBean *mCacheBean; // @synthesize mCacheBean=_mCacheBean;
@property(nonatomic) __weak NSMutableDictionary *offsetDict; // @synthesize offsetDict=_offsetDict;
@property(nonatomic) __weak id <CTHotelImageGridViewDelegate> btndelegate; // @synthesize btndelegate=_btndelegate;
@property(retain, nonatomic) NSArray *hotelGroupStyleList; // @synthesize hotelGroupStyleList=_hotelGroupStyleList;
@property(retain, nonatomic) HotelBasicImageModel *selectImageModel; // @synthesize selectImageModel=_selectImageModel;
@property(nonatomic) __weak UIView *picturesTabView; // @synthesize picturesTabView=_picturesTabView;
@property(nonatomic) long long gridType; // @synthesize gridType=_gridType;
@property(retain, nonatomic) NSArray *imageTabArray; // @synthesize imageTabArray=_imageTabArray;
@property(nonatomic) int hotelDataType; // @synthesize hotelDataType=_hotelDataType;
@property(nonatomic) int hotelId; // @synthesize hotelId=_hotelId;
@property(retain, nonatomic) CTHotelNoPicView *nopicView; // @synthesize nopicView=_nopicView;
@property(retain, nonatomic) HotelImageViewModel *imageModel; // @synthesize imageModel=_imageModel;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)viewController;
- (_Bool)getABForDptp;
- (void)gotoShowBigImge:(long long)arg1 indexPath:(id)arg2;
- (void)gotoStreetViewController:(id)arg1;
- (void)streetViewControllrer:(id)arg1;
- (void)goToHotelVideoViewController:(id)arg1;
- (void)showBigImage:(id)arg1;
- (void)clickVRPalyer;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)touchFooterView:(id)arg1;
- (void)touchHeaderView:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)initView;
- (long long)cellCountWithRoomViewModel:(long long)arg1;
- (id)roomImageModel:(long long)arg1;
- (id)roomImageViewModel:(long long)arg1;
- (_Bool)isHotelRoomImageGroup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

