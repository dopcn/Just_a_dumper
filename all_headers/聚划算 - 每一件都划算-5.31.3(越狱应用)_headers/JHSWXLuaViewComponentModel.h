//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class JHSWXLuaViewPackageModel, NSDictionary;

@interface JHSWXLuaViewComponentModel : TBJSONModel
{
    JHSWXLuaViewPackageModel *_pkg_info;
    NSDictionary *_data;
}

@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(copy, nonatomic) JHSWXLuaViewPackageModel *pkg_info; // @synthesize pkg_info=_pkg_info;
- (void).cxx_destruct;

@end

