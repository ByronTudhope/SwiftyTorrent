//
//  STFile.h
//  SwiftyTorrent
//
//  Created by Danylo Kostyshyn on 7/15/19.
//  Copyright © 2019 Danylo Kostyshyn. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(File)
@interface STFile : NSObject
@property (readonly, strong, nonatomic) NSString *name;
@property (readonly, strong, nonatomic) NSString *path;
@property (readonly, nonatomic) NSUInteger size;
@end

NS_ASSUME_NONNULL_END
