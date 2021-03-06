//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseModel.h"

#import "TTTJumpProtocol-Protocol.h"

@class NSArray, NSNumber, NSString, TTTAdsReminderModel, TTTCommonConfigModel, TTTInventoryModel, TTTJumpModel;

@interface TTTAdsModel : TTTBaseModel <TTTJumpProtocol>
{
    _Bool _isShowSubTitle;
    _Bool _isTabSelect;
    NSString *_name;
    NSString *_pictureUrl;
    NSString *_content;
    TTTJumpModel *_jump;
    double _nameTextLength;
    long long _anchorBeginFloorSection;
    NSString *_advertId;
    NSNumber *_push_time;
    NSString *_push_url;
    NSString *_push_msg;
    NSString *_warePic;
    NSString *_relatedId;
    TTTInventoryModel *_inventory;
    TTTCommonConfigModel *_config;
    double _picHeight;
    NSString *_groupId;
    NSString *_prodSrvPrefix;
    NSArray *_waresList;
    TTTAdsReminderModel *_reminderModel;
    NSString *_tabPic;
    NSString *_tabClickPic;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_imageWidth;
    NSString *_tabStyle;
    double _tabWidth;
    long long _tabType;
    unsigned long long _imageStatus;
}

@property(nonatomic) _Bool isTabSelect; // @synthesize isTabSelect=_isTabSelect;
@property(nonatomic) unsigned long long imageStatus; // @synthesize imageStatus=_imageStatus;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(nonatomic) double tabWidth; // @synthesize tabWidth=_tabWidth;
@property(nonatomic) __weak NSString *tabStyle; // @synthesize tabStyle=_tabStyle;
@property(copy, nonatomic) NSNumber *imageWidth; // @synthesize imageWidth=_imageWidth;
@property(copy, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(copy, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *tabClickPic; // @synthesize tabClickPic=_tabClickPic;
@property(copy, nonatomic) NSString *tabPic; // @synthesize tabPic=_tabPic;
@property(retain, nonatomic) TTTAdsReminderModel *reminderModel; // @synthesize reminderModel=_reminderModel;
@property(retain, nonatomic) NSArray *waresList; // @synthesize waresList=_waresList;
@property(copy, nonatomic) NSString *prodSrvPrefix; // @synthesize prodSrvPrefix=_prodSrvPrefix;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(nonatomic) double picHeight; // @synthesize picHeight=_picHeight;
@property(nonatomic) _Bool isShowSubTitle; // @synthesize isShowSubTitle=_isShowSubTitle;
@property(retain, nonatomic) TTTCommonConfigModel *config; // @synthesize config=_config;
@property(retain, nonatomic) TTTInventoryModel *inventory; // @synthesize inventory=_inventory;
@property(copy, nonatomic) NSString *relatedId; // @synthesize relatedId=_relatedId;
@property(copy, nonatomic) NSString *warePic; // @synthesize warePic=_warePic;
@property(copy, nonatomic) NSString *push_msg; // @synthesize push_msg=_push_msg;
@property(copy, nonatomic) NSString *push_url; // @synthesize push_url=_push_url;
@property(copy, nonatomic) NSNumber *push_time; // @synthesize push_time=_push_time;
@property(copy, nonatomic) NSString *advertId; // @synthesize advertId=_advertId;
@property(nonatomic) long long anchorBeginFloorSection; // @synthesize anchorBeginFloorSection=_anchorBeginFloorSection;
@property(nonatomic) double nameTextLength; // @synthesize nameTextLength=_nameTextLength;
@property(retain, nonatomic) TTTJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *pictureUrl; // @synthesize pictureUrl=_pictureUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)forthJumpObject;
- (id)thirdJumpObject;
- (id)sencondJumpObject;
- (id)firstJumpObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

