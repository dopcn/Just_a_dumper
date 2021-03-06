//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSURL, VSFigureInfo, VSProductCommentDetailRsp, VSProductCommentDetailfigureInfo, VSProductModel;
@protocol MWPhoto, VSCommentProductAttributeTag><Optional, VSCommentRateDelegate, VSProductCommentDetailAttributeTag><Optional;

@interface VSCommentSectionModel : NSObject
{
    _Bool _expanded;
    _Bool _anonymous;
    _Bool _edited;
    _Bool _isSupportFigure;
    _Bool _alreadyCommented;
    _Bool _isLastSection;
    NSString *_orderSN;
    NSString *_commentID;
    NSArray *_cellClassNameArray;
    NSMutableArray *_cellHeightArray;
    NSString *_modifiedFailedImageName;
    NSURL *_productImageURL;
    NSString *_name;
    NSString *_price;
    NSString *_specialName;
    NSString *_size;
    NSString *_commentTitle;
    NSString *_arrowImageName;
    unsigned long long _rating;
    id <VSCommentRateDelegate> _rateDelegate;
    NSString *_selectedQuestButton;
    NSArray<VSCommentProductAttributeTag><Optional> *_attributeTagList;
    NSString *_experience;
    NSMutableArray *_imageTagViewModelArray;
    NSMutableArray<MWPhoto> *_previewPhotos;
    NSArray<VSProductCommentDetailAttributeTag><Optional> *_commentDetailAttributeTagList;
    VSProductCommentDetailfigureInfo *_figureInfo;
    VSFigureInfo *_userFigureInfo;
    NSString *_goodsId;
    VSProductModel *_model;
    VSProductCommentDetailRsp *_productCommentDetail;
    NSString *_saveFigure;
}

+ (void)getUploadPictureTokenSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
+ (id)failureCellClassNameArray;
+ (id)commentedCellClassNameArrayWithImpressionTableViewCell:(_Bool)arg1 isShouldShowFigure:(_Bool)arg2;
+ (id)uncommentedCellClassNameArrayWithImpressionTableViewCell:(_Bool)arg1 isShouldSupportFigure:(_Bool)arg2;
@property(retain, nonatomic) NSString *saveFigure; // @synthesize saveFigure=_saveFigure;
@property(retain, nonatomic) VSProductCommentDetailRsp *productCommentDetail; // @synthesize productCommentDetail=_productCommentDetail;
@property(nonatomic) __weak VSProductModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool isLastSection; // @synthesize isLastSection=_isLastSection;
@property(nonatomic) _Bool alreadyCommented; // @synthesize alreadyCommented=_alreadyCommented;
@property(copy, nonatomic) NSString *goodsId; // @synthesize goodsId=_goodsId;
@property(retain, nonatomic) VSFigureInfo *userFigureInfo; // @synthesize userFigureInfo=_userFigureInfo;
@property(retain, nonatomic) VSProductCommentDetailfigureInfo *figureInfo; // @synthesize figureInfo=_figureInfo;
@property(retain, nonatomic) NSArray<VSProductCommentDetailAttributeTag><Optional> *commentDetailAttributeTagList; // @synthesize commentDetailAttributeTagList=_commentDetailAttributeTagList;
@property(nonatomic) _Bool isSupportFigure; // @synthesize isSupportFigure=_isSupportFigure;
@property(nonatomic, getter=isEdited) _Bool edited; // @synthesize edited=_edited;
@property(nonatomic, getter=isAnonymous) _Bool anonymous; // @synthesize anonymous=_anonymous;
@property(retain, nonatomic) NSMutableArray<MWPhoto> *previewPhotos; // @synthesize previewPhotos=_previewPhotos;
@property(retain, nonatomic) NSMutableArray *imageTagViewModelArray; // @synthesize imageTagViewModelArray=_imageTagViewModelArray;
@property(copy, nonatomic) NSString *experience; // @synthesize experience=_experience;
@property(retain, nonatomic) NSArray<VSCommentProductAttributeTag><Optional> *attributeTagList; // @synthesize attributeTagList=_attributeTagList;
@property(retain, nonatomic) NSString *selectedQuestButton; // @synthesize selectedQuestButton=_selectedQuestButton;
@property(nonatomic) __weak id <VSCommentRateDelegate> rateDelegate; // @synthesize rateDelegate=_rateDelegate;
@property(nonatomic) unsigned long long rating; // @synthesize rating=_rating;
@property(copy, nonatomic) NSString *arrowImageName; // @synthesize arrowImageName=_arrowImageName;
@property(copy, nonatomic) NSString *commentTitle; // @synthesize commentTitle=_commentTitle;
@property(copy, nonatomic) NSString *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *specialName; // @synthesize specialName=_specialName;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSURL *productImageURL; // @synthesize productImageURL=_productImageURL;
@property(copy, nonatomic) NSString *modifiedFailedImageName; // @synthesize modifiedFailedImageName=_modifiedFailedImageName;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) NSMutableArray *cellHeightArray; // @synthesize cellHeightArray=_cellHeightArray;
@property(retain, nonatomic) NSArray *cellClassNameArray; // @synthesize cellClassNameArray=_cellClassNameArray;
@property(copy, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
@property(copy, nonatomic) NSString *orderSN; // @synthesize orderSN=_orderSN;
- (void).cxx_destruct;
- (void)clearFigureParameters;
- (void)removePopWindowWithViewController:(id)arg1;
- (void)addFigureWithViewController:(id)arg1 information:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
- (void)submitCommentSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)addProductCommentSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)uploadImagesSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)uploadImageAtIndex:(unsigned long long)arg1 withUploadInfoModel:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)requesProductCommentDetailSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)unfinishedMessageWithCallback:(CDUnknownBlockType)arg1;
- (id)isSelectedTagImageArray;
- (id)selectedAttributeTags;
- (void)updateImageTagViewModelArrayWithSelectionImageURLs:(id)arg1;
- (void)updateAttributeTagViewModelWithAttributeTagList:(id)arg1;
- (void)updateCellClassNameArray;
- (id)sizeID;
- (id)productID;
- (id)initWithModel:(id)arg1;

@end

