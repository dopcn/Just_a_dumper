//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NVModelBaseHbtActivity, NVWhiteBoard, RACCommand;

@interface ODDishCartRecommendViewModel : NSObject
{
    RACCommand *_getRecommendCommand;
    NSArray *_recommendDishes;
    NSArray *_validRecommendDishSpuIds;
    long long _activityDishType;
    NVWhiteBoard *_whiteBoard;
    NVModelBaseHbtActivity *_originalRecommendInfo;
    NSMutableArray *_fullRecommendDishesQueue;
}

@property(retain, nonatomic) NSMutableArray *fullRecommendDishesQueue; // @synthesize fullRecommendDishesQueue=_fullRecommendDishesQueue;
@property(retain, nonatomic) NVModelBaseHbtActivity *originalRecommendInfo; // @synthesize originalRecommendInfo=_originalRecommendInfo;
@property(nonatomic) __weak NVWhiteBoard *whiteBoard; // @synthesize whiteBoard=_whiteBoard;
@property(nonatomic) long long activityDishType; // @synthesize activityDishType=_activityDishType;
@property(copy, nonatomic) NSArray *validRecommendDishSpuIds; // @synthesize validRecommendDishSpuIds=_validRecommendDishSpuIds;
@property(copy, nonatomic) NSArray *recommendDishes; // @synthesize recommendDishes=_recommendDishes;
@property(retain, nonatomic) RACCommand *getRecommendCommand; // @synthesize getRecommendCommand=_getRecommendCommand;
- (void).cxx_destruct;
- (id)attributedTitleForRecommendSectionHeader;
- (id)p_generateValidRecommendDishSpuIds;
- (id)generateNewRecommendDishes:(_Bool)arg1;
- (id)p_generateFullRecommendDishesQueue;
- (void)onSelectNumChanged:(id)arg1;
- (void)p_handleGetRecommendDidFailed;
- (void)p_handleGetRecommendDidSuccessWithResult:(id)arg1;
- (void)dealloc;
- (void)setupViewModel;
- (id)initWithWhiteBoard:(id)arg1;

@end

