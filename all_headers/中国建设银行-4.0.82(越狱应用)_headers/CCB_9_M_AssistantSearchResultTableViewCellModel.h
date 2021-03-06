//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseModel.h"

@class CCB_9_M_AssistantDBBaseModel, CCB_9_M_AssistantJumpMenuModel, NSString, UIImage;

@interface CCB_9_M_AssistantSearchResultTableViewCellModel : CCBBaseModel
{
    int searchResultStyle;
    NSString *title;
    UIImage *leftImg;
    NSString *timeStr;
    NSString *detailStr;
    CCB_9_M_AssistantDBBaseModel *assistantDBBaseModel;
    CCB_9_M_AssistantJumpMenuModel *assistantJumpMenuModel;
}

@property(retain, nonatomic) CCB_9_M_AssistantJumpMenuModel *assistantJumpMenuModel; // @synthesize assistantJumpMenuModel;
@property(retain, nonatomic) CCB_9_M_AssistantDBBaseModel *assistantDBBaseModel; // @synthesize assistantDBBaseModel;
@property(nonatomic) int searchResultStyle; // @synthesize searchResultStyle;
@property(retain, nonatomic) NSString *detailStr; // @synthesize detailStr;
@property(retain, nonatomic) NSString *timeStr; // @synthesize timeStr;
@property(retain, nonatomic) UIImage *leftImg; // @synthesize leftImg;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (void)updateAssistantSearchResultTableViewCellModelFromAssistantJumpMenuModel:(id)arg1;
- (void)updateAssistantSearchResultTableViewCellModelFromAssistantDBBaseModel:(id)arg1;

@end

