//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VSHotCategoryItemData : NSObject
{
    NSString *_categoryId;
    NSString *_name;
    NSString *_logo;
    NSString *_mtmsRuleId;
}

+ (id)modelCustomPropertyMapper;
@property(copy, nonatomic) NSString *mtmsRuleId; // @synthesize mtmsRuleId=_mtmsRuleId;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;

@end

