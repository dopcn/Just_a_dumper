//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "ZLPhotoPickerBrowserViewControllerDataSource-Protocol.h"
#import "ZLPhotoPickerBrowserViewControllerDelegate-Protocol.h"

@class NSLayoutConstraint, NSMutableArray, NSString, UIImageView, UILabel;

@interface PDIMMyReportCell : UITableViewCell <ZLPhotoPickerBrowserViewControllerDataSource, ZLPhotoPickerBrowserViewControllerDelegate>
{
    CDUnknownBlockType _headTapped;
    CDUnknownBlockType _cardTapped;
    UIImageView *_headerImageView;
    UIImageView *_backImage;
    UILabel *_title;
    UILabel *_tips;
    UILabel *_subTitle;
    UILabel *_content;
    UILabel *_subContent;
    UIImageView *_reportImage;
    NSLayoutConstraint *_cellWidth;
    NSLayoutConstraint *_backImageTop;
    NSLayoutConstraint *_titleTop;
    NSLayoutConstraint *_lineTop;
    NSLayoutConstraint *_reportImageTop;
    NSLayoutConstraint *_backImageHeight;
    NSLayoutConstraint *_subTitleTop;
    unsigned long long _type;
    NSMutableArray *_images;
    NSString *_reportID;
}

+ (double)heightOfCell;
@property(retain, nonatomic) NSString *reportID; // @synthesize reportID=_reportID;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak NSLayoutConstraint *subTitleTop; // @synthesize subTitleTop=_subTitleTop;
@property(nonatomic) __weak NSLayoutConstraint *backImageHeight; // @synthesize backImageHeight=_backImageHeight;
@property(nonatomic) __weak NSLayoutConstraint *reportImageTop; // @synthesize reportImageTop=_reportImageTop;
@property(nonatomic) __weak NSLayoutConstraint *lineTop; // @synthesize lineTop=_lineTop;
@property(nonatomic) __weak NSLayoutConstraint *titleTop; // @synthesize titleTop=_titleTop;
@property(nonatomic) __weak NSLayoutConstraint *backImageTop; // @synthesize backImageTop=_backImageTop;
@property(nonatomic) __weak NSLayoutConstraint *cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) __weak UIImageView *reportImage; // @synthesize reportImage=_reportImage;
@property(nonatomic) __weak UILabel *subContent; // @synthesize subContent=_subContent;
@property(nonatomic) __weak UILabel *content; // @synthesize content=_content;
@property(nonatomic) __weak UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(nonatomic) __weak UILabel *tips; // @synthesize tips=_tips;
@property(nonatomic) __weak UILabel *title; // @synthesize title=_title;
@property(nonatomic) __weak UIImageView *backImage; // @synthesize backImage=_backImage;
@property(nonatomic) __weak UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(copy, nonatomic) CDUnknownBlockType cardTapped; // @synthesize cardTapped=_cardTapped;
@property(copy, nonatomic) CDUnknownBlockType headTapped; // @synthesize headTapped=_headTapped;
- (void).cxx_destruct;
- (id)photoBrowser:(id)arg1 photoAtIndexPath:(id)arg2;
- (long long)photoBrowser:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;
- (long long)numberOfSectionInPhotosInPickerBrowser:(id)arg1;
- (void)showSelectedImagesWithIndex:(long long)arg1;
- (void)headerTapped;
- (void)cellTapped;
- (void)fillCellWithModel:(id)arg1;
- (void)initData;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

