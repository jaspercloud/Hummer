//
//  HMImageManager.h
//  Hummer
//
//  Created by didi on 2020/11/16.
//

#import <Foundation/Foundation.h>
#import "HMImageLoader.h"

NS_ASSUME_NONNULL_BEGIN

@interface HMImageManager : NSObject

+ (instancetype)sharedManager;

- (nullable id<HMImageLoaderOperation>)load:(id<HMURLConvertible>)source
                           inJSBundleSource:(nullable id<HMURLConvertible>)bundleSource
                                    context:(nullable HMImageLoaderContext *)context
                                 completion:(HMImageCompletionBlock)completionBlock;
@end

NS_ASSUME_NONNULL_END
