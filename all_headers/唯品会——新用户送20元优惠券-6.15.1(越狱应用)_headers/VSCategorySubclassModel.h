//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface VSCategorySubclassModel : JSONModel
{
    long long _total;
    NSString *_categoryId;
    NSString *_categoryName;
    NSString *_parentId;
}

+ (id)keyMapper;
+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSString *parentId; // @synthesize parentId=_parentId;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(nonatomic) long long total; // @synthesize total=_total;
- (void).cxx_destruct;
- (id)description;

@end

