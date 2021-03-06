//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HomePageChannelFilter-Protocol.h"
#import "HomePageChannelFilterItem-Protocol.h"
#import "HomePageChannelFloorCell-Protocol.h"
#import "HomePageChannelNavigatorItem-Protocol.h"
#import "HomePageChannelValidation-Protocol.h"

@class HomePageChannelCategoryFloorModel, HomePageChannelPaginationLoadModel, HomePageChannelSearchParamModel, HomePageChannelStyleParamModel, NSArray, NSDictionary, NSNumber, NSString, UIColor;
@protocol HomePageChannelFilter;

@interface HomePageChannelCategoryModel : NSObject <HomePageChannelValidation, HomePageChannelFloorCell, HomePageChannelNavigatorItem, HomePageChannelFilter, HomePageChannelFilterItem>
{
    NSNumber *_identityId;
    NSString *_title;
    NSString *_functionId;
    NSDictionary *_params;
    long long _type;
    NSString *_srv;
    NSString *_style;
    HomePageChannelSearchParamModel *_searchParam;
    HomePageChannelStyleParamModel *_styleParam;
    NSArray *_subs;
    HomePageChannelCategoryFloorModel *_categoryFloor;
    HomePageChannelCategoryModel *_parentCategory;
    long long _selectedIndex;
    HomePageChannelPaginationLoadModel *_paginationLoadModel;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) HomePageChannelPaginationLoadModel *paginationLoadModel; // @synthesize paginationLoadModel=_paginationLoadModel;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak HomePageChannelCategoryModel *parentCategory; // @synthesize parentCategory=_parentCategory;
@property(nonatomic) __weak HomePageChannelCategoryFloorModel *categoryFloor; // @synthesize categoryFloor=_categoryFloor;
@property(retain, nonatomic) NSArray *subs; // @synthesize subs=_subs;
@property(retain, nonatomic) HomePageChannelStyleParamModel *styleParam; // @synthesize styleParam=_styleParam;
@property(retain, nonatomic) HomePageChannelSearchParamModel *searchParam; // @synthesize searchParam=_searchParam;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *srv; // @synthesize srv=_srv;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *functionId; // @synthesize functionId=_functionId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSNumber *identityId; // @synthesize identityId=_identityId;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *filterItemName;
- (id)actionForFilterItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long selectedFilterItemIndex;
@property(readonly, nonatomic) NSArray *filterItems;
@property(readonly, nonatomic) id <HomePageChannelFilter> navigatorItemFilter;
@property(readonly, nonatomic) UIColor *navigatorItemSelectedColor;
@property(readonly, nonatomic) NSString *navigatorItemName;
- (id)actionAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSString *floorCellIdentifier;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)keyValuesDidFinishConvertingToObject;
- (void)appendCategoryItemsWithAggregatePage:(id)arg1;
- (void)clearCategoryItems;
@property(readonly, nonatomic) HomePageChannelCategoryModel *secondaryCategory;
@property(readonly, nonatomic) HomePageChannelCategoryModel *topCategory;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

