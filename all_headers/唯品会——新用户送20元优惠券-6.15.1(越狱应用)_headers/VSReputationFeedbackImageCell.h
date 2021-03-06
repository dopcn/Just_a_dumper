//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MWPhotoBrowserDelegate-Protocol.h"
#import "VSCropDelegate-Protocol.h"
#import "VSPhotoPickerControllerDelegate-Protocol.h"
#import "VSReputationTableViewCellProtocol-Protocol.h"
#import "VSTagListViewDelegate-Protocol.h"

@class MWPhotoBrowser, NSArray, NSString, UILabel, UITableView, UIView, VSPhotoPickerController, VSReputationFeedbackViewModel, VSTagListView;

@interface VSReputationFeedbackImageCell : UITableViewCell <VSTagListViewDelegate, MWPhotoBrowserDelegate, VSPhotoPickerControllerDelegate, VSCropDelegate, VSReputationTableViewCellProtocol>
{
    UIView *_imageContentView;
    UILabel *_tipsLabel;
    VSReputationFeedbackViewModel *_viewModel;
    UITableView *_tableView;
    VSTagListView *_imageListView;
    VSPhotoPickerController *_photoPickerController;
    MWPhotoBrowser *_previewPhotoBrowser;
    NSArray *_selectedImageURLs;
}

+ (double)estimatedCellHeightForSectionModel:(id)arg1 withCellWidth:(double)arg2 forRowAtIndexPath:(id)arg3;
@property(retain, nonatomic) NSArray *selectedImageURLs; // @synthesize selectedImageURLs=_selectedImageURLs;
@property(retain, nonatomic) MWPhotoBrowser *previewPhotoBrowser; // @synthesize previewPhotoBrowser=_previewPhotoBrowser;
@property(retain, nonatomic) VSPhotoPickerController *photoPickerController; // @synthesize photoPickerController=_photoPickerController;
@property(retain, nonatomic) VSTagListView *imageListView; // @synthesize imageListView=_imageListView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) VSReputationFeedbackViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *imageContentView; // @synthesize imageContentView=_imageContentView;
- (void).cxx_destruct;
- (_Bool)photoPickerControllerShouldDimissAfterSelection;
- (void)photoPickerController:(id)arg1 didSelectURLStrings:(id)arg2;
- (id)photoBrowser:(id)arg1 titleForPhotoAtIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (void)tagListView:(id)arg1 didTouchUpInsideAddTagView:(id)arg2;
- (_Bool)tagListView:(id)arg1 shouldBeSelectedAtIndex:(unsigned long long)arg2;
- (void)tableView:(id)arg1 configureSectionModel:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reloadCell;
- (id)parentViewController;
- (void)dealloc;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

