//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DEFFilterBaseViewModel.h"

@class DEFCategoryFilterModel, MTHomeCategoryResponse, RACCommand;

@interface DEFCategoryFilterViewModel : DEFFilterBaseViewModel
{
    _Bool _hasGroup;
    int _criteriaID;
    long long _distance;
    long long _criteriaType;
    RACCommand *_meishiCateMenuCommand;
    MTHomeCategoryResponse *_response;
    DEFCategoryFilterModel *_categoryFilterModel;
}

@property(retain, nonatomic) DEFCategoryFilterModel *categoryFilterModel; // @synthesize categoryFilterModel=_categoryFilterModel;
@property(retain, nonatomic) MTHomeCategoryResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) RACCommand *meishiCateMenuCommand; // @synthesize meishiCateMenuCommand=_meishiCateMenuCommand;
@property(nonatomic) int criteriaID; // @synthesize criteriaID=_criteriaID;
@property(nonatomic) long long criteriaType; // @synthesize criteriaType=_criteriaType;
@property(nonatomic) _Bool hasGroup; // @synthesize hasGroup=_hasGroup;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
- (void).cxx_destruct;
- (id)generateAreaFingerPrint;
- (id)createMeishiCateMenuRequest;
- (id)init;

@end

